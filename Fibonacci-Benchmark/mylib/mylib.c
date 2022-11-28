

long int fibRec(int xyz) {
    if((xyz==0)||(xyz==1)) {
        return xyz;
    }else {
        return (fibRec(xyz-1)+fibRec(xyz-2));
    }
}

long int fibIte(int xyz) {
    int x = 0;
    int y = 1;
    int z;
    if((xyz==0)||(xyz==1)){
        return xyz;
    }else{
        for(int i=2; i<= xyz;i++){
            z = x+y;
            x = y;
            y = z;
        }
        return z;
    }
}