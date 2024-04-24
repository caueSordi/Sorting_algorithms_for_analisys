
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

