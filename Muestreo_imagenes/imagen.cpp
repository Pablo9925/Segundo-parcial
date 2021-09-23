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
}

void imagen::muestreo()
{
    int r,g,b,pixr,pixg,pixb;
    float i,j,k,l;
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
            matrizR[int(i)][int(j)]=pixr;
            matrizG[int(i)][int(j)]=pixg;
            matrizB[int(i)][int(j)]=pixb;
        }
    }
    for(i=8;i<16;i++){
        for(j=7;j>=0;j--){
            for(k=centrox+x*(i-8);k<(centrox+x*(i-7));k++){
                for(l=centroy-y*(8-j);l<(centroy-y*(7-j));l++){
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
            matrizR[int(i)][int(j)]=pixr;
            matrizG[int(i)][int(j)]=pixg;
            matrizB[int(i)][int(j)]=pixb;
        }
    }
    for(i=7;i>=0;i--){
        for(j=7;j>=0;j--){
            for(k=centrox-x*(8-i);k<(centrox-x*(7-i));k++){
                for(l=centroy-y*(8-j);l<(centroy-y*(7-j));l++){
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
            matrizR[int(i)][int(j)]=pixr;
            matrizG[int(i)][int(j)]=pixg;
            matrizB[int(i)][int(j)]=pixb;
        }
    }

    for(i=7;i>=0;i--){
        for(j=8;j<16;j++){
            for(k=centrox-x*(8-i);k<(centrox-x*(7-i));k++){
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
            matrizR[int(i)][int(j)]=pixr;
            matrizG[int(i)][int(j)]=pixg;
            matrizB[int(i)][int(j)]=pixb;
        }
    }
    int digi;
    string str;
    cout<<"\n//////////////// Matriz pixeles rojos ////////////////"<<endl;
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            cout<<matrizR[int(j)][int(i)];
            str=to_string(matrizR[int(j)][int(i)]);
            digi=str.size();
            if(digi==1) cout<<"   ";
            else if(digi==2) cout<<"  ";
            else cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n//////////////// Matriz pixeles verdes ////////////////"<<endl;
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            cout<<matrizG[int(j)][int(i)];
            str=to_string(matrizG[int(j)][int(i)]);
            digi=str.size();
            if(digi==1) cout<<"   ";
            else if(digi==2) cout<<"  ";
            else cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n//////////////// Matriz pixeles azules ////////////////"<<endl;
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            cout<<matrizB[int(j)][int(i)];
            str=to_string(matrizB[int(j)][int(i)]);
            digi=str.size();
            if(digi==1) cout<<"   ";
            else if(digi==2) cout<<"  ";
            else cout<<" ";
        }
        cout<<"\n";
    }
}

void imagen::guardar_archivo()
{
    fstream ofs("Matrices.txt",ios::app);
    ofs<<"byte array[3][16][16]={{";
    for(int i=0;i<16;i++){
        ofs<<"{";
        for(int j=0;j<16;j++){
            if(j!=0) ofs<<",";
            ofs<<matrizR[int(j)][int(i)];
        }
        if(i==15) ofs<<"}";
        else ofs<<"}, ";
    }
    ofs<<"}";

    ofs<<", {";
    for(int i=0;i<16;i++){
        ofs<<"{";
        for(int j=0;j<16;j++){
            if(j!=0) ofs<<",";
            ofs<<matrizG[int(j)][int(i)];
        }
        if(i==15) ofs<<"}";
        else ofs<<"}, ";
    }
    ofs<<"}";

    ofs<<", {";
    for(int i=0;i<16;i++){
        ofs<<"{";
        for(int j=0;j<16;j++){
            if(j!=0) ofs<<",";
            ofs<<matrizB[int(j)][int(i)];
        }
        if(i==15) ofs<<"}";
        else ofs<<"}, ";
    }
    ofs<<"}};";
    ofs.close();
}

imagen::~imagen()
{
    delete im;
}
