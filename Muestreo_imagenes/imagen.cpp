#include "imagen.h"

imagen::imagen(string filename)
{
    im=new QImage(filename.c_str());
    dimx=im->width();
    dimy=im->height();
    centrox=dimx/2;
    centroy=dimy/2;
    x=dimx/leds;
    y=dimy/leds;
    //cout<<"x: "<<dimx<<"\ny: "<<dimy<<endl;
}

void imagen::submuestreo()
{
    int i,j,k,l,r,g,b,pixr,pixg,pixb;
    for(i=8;i<16;i++){
        for(j=8;j<16;j++){
            for(k=centrox+x*(i-8);k<(centrox+x*(i-7));k++){
                for(l=centroy+y*(j-8);l<(centroy+y*(j-7));l++){
                    r=im->pixelColor(k,l).red();
                    g=im->pixelColor(k,l).green();
                    b=im->pixelColor(k,l).blue();
                    if(coloresR.find(r)==coloresR.end()) coloresR.insert(pair<int,int>(r,1));
                    else{
                        for(it=coloresR.begin();it!=coloresR.end();it++){
                            if(it->first==r) it->second=it->second+1;
                        }
                    }
                    if(coloresB.find(b)==coloresB.end()) coloresB.insert(pair<int,int>(b,1));
                    else{
                        for(it=coloresB.begin();it!=coloresB.end();it++){
                            if(it->first==b) it->second=it->second+1;
                        }
                    }
                    if(coloresG.find(g)==coloresG.end()) coloresG.insert(pair<int,int>(g,1));
                    else{
                        for(it=coloresG.begin();it!=coloresG.end();it++){
                            if(it->first==g) it->second=it->second+1;
                        }
                    }
                }
            }
            r=0;
            g=0;
            b=0;
            for(it=coloresR.begin();it!=coloresR.end();it++){
                if(it->second>r){
                    r=it->second;
                    pixr=it->first;
                }
            }
            for(it=coloresG.begin();it!=coloresG.end();it++){
                if(it->second>g){
                    g=it->second;
                    pixg=it->first;
                }
            }
            for(it=coloresB.begin();it!=coloresB.end();it++){
                if(it->second>b){
                    b=it->second;
                    pixb=it->first;
                }
            }
            coloresR.clear();
            coloresG.clear();
            coloresB.clear();
            matrizR[i][j]=pixr;
            matrizG[i][j]=pixg;
            matrizB[i][j]=pixb;
        }
    }
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            cout<<"MatrizR ["<<i<<"]["<<j<<"] = "<<matrizR[i][j]<<endl;
        }
    }
}

imagen::~imagen()
{
    delete im;
}
