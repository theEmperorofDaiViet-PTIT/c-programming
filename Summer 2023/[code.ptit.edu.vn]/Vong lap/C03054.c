// CẮT ĐÔI

// Với một vài số nguyên dương có 1 chữ số, khi cắt đôi số đó theo chiều ngang và lấy nửa phía trên thì ta vẫn có một số nguyên. Cụ thể:
//     - Số 0 cắt đôi vẫn ra số 0
//     - Số 1 cắt đôi vẫn ra số 1
//     - Số 8 cắt đôi ra số 0
//     - Số 9 cắt đôi ra số 0
// Các số khác cắt đôi sẽ không hợp lệ.
// Cho một số nguyên dương không quá 18 chữ số. Hãy in ra kết quả “cắt đôi” của số đó.
// Nếu không hợp lệ thì ghi ra INVALID.
// Chú ý: nếu cắt đôi ra một dãy toàn 0 thì cũng được coi là không hợp lệ. Kết quả cắt đôi thì không tính chữ số 0 ở đầu.

// Input
// Dòng đầu ghi số bộ test. Mỗi bộ test ghi một số nguyên dương không quá 18 chữ số.
// Output
// Ghi ra kết quả tính toán

// Ví dụ:
// Input:
// 3
// 1890
// 3681
// 8919
// Output:
// 1000
// INVALID
// 10

#include<stdio.h>
#include<stdbool.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        char s[18];
        bool allZero = true;
        bool firstDigitChecked = false;
        bool invalidNumber = false;
        int index = 0;
        for(int i = 0; i < 18; i++){
            if(a[i] >= 48 && a[i] <= 57){
                if(a[i] - 48 == 0){
                    if(firstDigitChecked){
                        s[index] = '0';
                        index++;
                    }
                }
                else if(a[i] - 48 == 1){
                    allZero = false;
                    firstDigitChecked = true;
                    s[index] = '1';
                    index++;
                }
                else if(a[i] - 48 == 8){
                    if(firstDigitChecked){
                        s[index] = '0';
                        index++;
                    }
                }
                else if(a[i] - 48 == 9){
                    if(firstDigitChecked){
                        s[index] = '0';
                        index++;
                    }
                }
                else{
                    invalidNumber = true;
                    break;
                }
            }
        }
        if(invalidNumber || allZero){
            printf("INVALID\n");
        }
        else{
            for(int i = 0; i < index; i++){
                if(s[i] >= 48 && s[i] <= 57){
                    printf("%c", s[i]);
                }
            }
            printf("\n");
        }
        for(int i = 0; i < 18; i++){
            a[i] = 'x';
            s[i] = 'x';
        }
    }
}