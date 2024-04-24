
   void heap_sort(int *V, int N){
    int i, aux;
    for(i = N/2; i >= 0; i--){
        cria_heap(V, i, N-1);
    }
    for(i = N-1; i >= 1; i--){
        aux = V[0];
        V[0] = V[i];
        V[i] = aux;
        cria_heap(V, 0, i-1);
    } //O(n log n) in the worst case, O(n log n) in the best case


    void cria_heap(int *V, int i, int f){
    int aux = V[i];
    int j = i * 2 + 1;
    while(j <= f){
        if(j < f){
            if(V[j] < V[j+1]){
                j = j + 1;
            }
        }
        if(aux < V[j]){
            V[i] = V[j];
            i = j;
            j = 2 * i + 1;
        }else{
            j = f + 1;
        }
    }
    V[i] = aux;
} //O(n log n) in the worst case, O(n log n) in the best case