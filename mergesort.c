void mergesort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){ //complexity O(1)
        meio = (inicio + fim) / 2; //complexity O(1)
        mergesort(V, inicio, meio); //complexity O(n log n)
        mergesort(V, meio + 1, fim); //complexity O(n log n)
        merge(V, inicio, meio, fim); //complexity O(n)
    }
}

void merge (int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1; //complexity O(1)
    p1 = inicio; //complexity O(1)
    p2 = meio + 1; //complexity O(1)
    temp = (int *) malloc(tamanho * sizeof(int)); //complexity O(n)
    if(temp != NULL){ //complexity O(1)
        for(i = 0; i < tamanho; i++){ //complexity O(n)
            if(!fim1 && !fim2){ //complexity O(1)
                if(V[p1] < V[p2]){ //complexity O(1)
                    temp[i] = V[p1++]; //complexity O(1)
                }else{
                    temp[i] = V[p2++]; //complexity O(1)
                }
                if(p1 > meio){ //complexity O(1)
                    fim1 = 1; //complexity O(1)
                }
                if(p2 > fim){ //complexity O(1)
                    fim2 = 1; //complexity O(1)
                }
            }else{
                if(!fim1){ //complexity O(1)
                    temp[i] = V[p1++]; //complexity O(1)
                }else{
                    temp[i] = V[p2++]; //complexity O(1)
                }
            }
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++){ //complexity O(n)
            V[k] = temp[j]; //complexity O(1)
        }
    }
    free(temp); //complexity O(1)
}