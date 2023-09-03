// SỐ ĐẸP 2

// Một số được coi là đẹp nếu nếu nó có tính chất thuận nghịch và tổng chữ số chia hết cho 10. 
// Bài toán đặt ra là cho trước số chữ số. Hãy đếm xem có bao nhiêu số đẹp với số chữ số như vậy. 

// Dữ liệu vào: 
// Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số chữ số tương ứng cần kiểm tra (lớn hơn 1 và nhỏ hơn 10).
// Kết quả: 
// Mỗi bộ test viết ra số lượng số đẹp tương ứng.

// Ví dụ:
// Input:
// 2
// 2
// 5
// Output:
// 1
// 90

#include<stdio.h>

int count = 0;

void generate(int n, int sum);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        count = 0;
        // Phải gọi lần đầu ngoài hàm main vì để đảm bảo điều kiện chữ số đầu tiên khác 0
        for(int i = 1; i <= 9; i++){
            int sum = 0;
            generate(n - 2, sum += (2 * i));
        }
        printf("%d\n", count);
    }
}

void generate(int n, int sum){
    // vì là xâu đối xứng nên sinh một lúc 2 chữ số giống nhau
    if(n > 2){
        for(int i = 0; i <= 9; i++){
            generate(n - 2, sum += (2 * i));
        }
    }
    // còn đúng 2 chữ số
    else if(n == 2){
        // check số dư của tổng hiện tại sao cho sau khi thêm 2 chữ số nữa, tổng cuối cùng sẽ chia hết cho 10
        if((10 - (sum % 10)) % 2 == 0){
            // vì còn đúng 2 chữ số và phải giống nhau nên tổng số dư của chúng phải chẵn
            count += 2;
            // nếu điều kiện trên được thoả mãn -> có 2 xâu thoả mãn, ví dụ:
            // tổng hiện tại đang dư 8, 2 chữ số còn lại cần có tổng dư 2 để tổng cuối cùng chia hết cho 10
            // có 2 trường hợp là mỗi chữ số dư 1 hoặc dư 6, khi cộng lại sẽ được tổng dư 2
        }
    }
    // còn đúng 1 chữ số
    else if(n == 1){
        count++;
        // vì chỉ còn 1 chữ số nên chỉ có 1 khả năng để tổng cuối cùng chia hết cho 10
    }
    // trường hợp n <= 2, sau khi gọi lần đầu trong hàm main thì n <= 1
    else{
        if(sum % 10 == 0){
            count++;
        }
    }
}