#ifndef "IRON.H"
#define "IRON.H"
#define ambient 25
#define tempPoint100 110
#define tempPoint200 110
#define tempPoint300 110
#define tempPoint400 110 

int tempMap(int analogValue) {
    if(tempPointAmbient >= analogValue && tempPoint100 <= analogValue) return(map(analogValue, tempPointAmbient, tempPoint100, ambient, 100));
    if(tempPoint100 >= analogValue && tempPoint200 <= analogValue) return(map(analogValue, tempPoint100, tempPoint200, 100, 200));
    if(tempPoint200 >= analogValue && tempPoint300 <= analogValue) return(map(analogValue, tempPoint200, tempPoint300, 200, 300));
    if(tempPoint300 >= analogValue && tempPoint400 <= analogValue) return(map(analogValue, tempPoint300, tempPoint400, 300, 400));
}

int getAmbient() {
    
}
void setAmbientPoint(int ambient) {
    
}

#endif