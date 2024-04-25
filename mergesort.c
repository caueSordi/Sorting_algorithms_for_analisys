void mergesort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){ //complexity O(1)
        meio = (inicio + fim) / 2; //complexity O(1)
        mergesort(V, inicio, meio); //complexity O(n log n)
        mergesort(V, meio + 1, fim); //complexity O(n log n)
        merge(V, inicio, meio, fim); //complexity O(n)
    }
}