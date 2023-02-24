#include <iostream>

int main(){

    int i, j, m, arr[5];

    for(i=0;i<=4;i++){
        std::cout << "Digite o valor numero " << i+1 << ":";
        std::cin >> arr[i];
    }

    for(j=0;j<=3;j++){
        m = arr[j];
        for(i=0+j;i<=4;i++){
            if(arr[i]<m){
                m = arr[i];
                std::swap(arr[i],arr[j]);
            }
        }
    }

    std::cout << "Arranjo ordenado pelo algoritmo:" << std::endl;

    for(i=0;i<=4;i++){
        std::cout << "-NUMERO " << i+1 << ": " << arr[i] << std::endl;
    }

    return 0;

}
