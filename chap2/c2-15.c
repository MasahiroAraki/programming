#include <stdio.h> 
#include <stdint.h> 
union EndianTest {
    uint32_t i;
    uint8_t bytes[4];
}; 

int main() {
    union EndianTest value; 
    value.i = 0x01020304; 
    printf("値 (整数): 0x%08X\n", value.i);
    if (value.bytes[0] == 0x01) { 
        printf("ビッグエンディアン\n"); 
    } else if (value.bytes[3] == 0x01) {
        printf("リトルエンディアン\n"); 
    } 
    // 個々のバイトにアクセス
    printf("バイト値: 0x%02X 0x%02X 0x%02X 0x%02X\n", 
        value.bytes[0], value.bytes[1], value.bytes[2], value.bytes[3]);
    return 0;
} 
