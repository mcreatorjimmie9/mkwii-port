/* Function at 0x805B9838, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_805B9838(int r3)
{
    /* lis r3, 0 */ // 0x805B9838
    /* li r0, 0 */ // 0x805B983C
    r3 = *(0 + r3); // lwz @ 0x805B9840
    if (==) goto 0x0x805b985c;
    r3 = *(0xac + r3); // lwz @ 0x805B984C
    if (!=) goto 0x0x805b985c;
    /* li r0, 1 */ // 0x805B9858
    /* beqlr  */ // 0x805B9860
    /* b 0x805dffdc */ // 0x805B9864
}