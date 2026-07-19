/* Function at 0x805B4344, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805B4344(int r3, int r4)
{
    r0 = *(0x4104 + r3); // lwz @ 0x805B4344
    /* beqlr  */ // 0x805B434C
    /* li r4, 0 */ // 0x805B4350
    r3 = r3 + 0x4100; // 0x805B4354
    /* b 0x805b4cf4 */ // 0x805B4358
}