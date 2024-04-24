void bubblesort( int *V , N)){
    int i, j, aux;
    for(i = 0; i < N; i++){ //N because it repeats N times
        for(j = 0; j < N-1; j++){ //N in the worst case to organize the inverse and 1 in the best case to organize the ordered
            if(V[j] > V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }
}
//O(n²) in worst case, O(n) in best case

 void quicksort (int *V, int inicio, int fim){
    int i, j, pivo, aux;
    i = inicio;
    j = fim;
    pivo = V[(inicio + fim) / 2];
    while(i <= j){ 
        while(V[i] < pivo){ 
            i++;
        }
        while(V[j] > pivo){
            j--;
        }
        if(i <= j){
            aux = V[i];
            V[i] = V[j];
            V[j] = aux;
            i++;
            j--;
        }
    }
    if(j > inicio){
        quicksort(V, inicio, j);
    }
    if(i < fim){
        quicksort(V, i, fim);
    } //O(n log n) in the worst case, O(n log n) in the best case


    