void shellsort(int *V, int n){
    int i, j, h, x;
    h = 1;
    do{
        h = 3 * h + 1;
    }while(h < n);
    do{
        h /= 3;
        for(i = h; i < n; i++){
            x = V[i];
            j = i;
            while(V[j - h] > x){
                V[j] = V[j - h];
                j -= h;
                if(j < h){
                    break;
                }
            }
            V[j] = x;
        }
    }while(h != 1);
}