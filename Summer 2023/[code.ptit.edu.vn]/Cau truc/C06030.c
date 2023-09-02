// TÌM TỪ DÀI NHẤT

// Cho một văn bản bất kỳ. Hãy tìm ra từ có độ dài lớn nhất. Nếu có nhiều từ khác nhau có độ dài bằng nhau và bằng giá trị lớn nhất 
// thì in ra tất cả các từ đó theo thứ tự xuất hiện trong file dữ liệu vào (nhưng một từ dù xuất hiện nhiều lần cũng chỉ được liệt kê một lần).   

// Input:
// Gồm một đoạn văn bản bất kỳ. Không quá 1000 từ.
// Output:
// Ghi ra từ dài nhất, độ dài của nó và số lần xuất hiện trong file, cách nhau một khoảng trống. 
// Nếu có nhiều từ như vậy thì liệt kê lần lượt các từ theo thứ tự xuất hiện trong file ban đầu.

// Ví dụ:
// Input:
// Tiet hoc cuoi cung da ket thuc. Mon hoc Tin hoc co so 2 da ket thuc. Cac ban co gang on tap tot de thi dat ket qua cao. Chuc cac ban ngay cang gat hai duoc nhieu thanh cong tren con duong da chon
// Output:
// thuc. 5  2
// nhieu 5  1
// thanh 5  1
// duong 5  1

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct word {
    char word[100];
    int length;
    int count;
};

struct raw {
    char word[100];
    bool checked;
};

void main(){
    char input[100];
    struct raw a[10000];
    int index = 0;

    while(scanf("%s", input) != EOF){
        strcpy(a[index].word, input);
        a[index].checked = false;
        index++;
    }

    struct word words[10000];
    int indexDiff = 0;
    int maxLength = 0;
    for(int i = 0; i < index; i++){
        if(a[i].checked){
            continue;
        }
        else{
            strcpy(words[indexDiff].word, a[i].word);
            words[indexDiff].length = strlen(words[indexDiff].word);
            maxLength = words[indexDiff].length > maxLength ? words[indexDiff].length : maxLength;
            words[indexDiff].count = 1;
            for(int j = i + 1; j < index; j++){
                if(strcmp(words[indexDiff].word, a[j].word) == 0){
                    words[indexDiff].count++;
                    a[j].checked = true;
                }
            }
            indexDiff++;
            a[i].checked = true;
        }
    }

    for(int i = 0; i < indexDiff; i++){
        if(words[i].length == maxLength){
            printf("%s %d %d\n", words[i].word, words[i].length, words[i].count);
        }
    }
}