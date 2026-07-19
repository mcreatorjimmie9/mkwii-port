/* Function at 0x805DE834, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805DE834(int r4, int r5)
{
    /* lis r5, 0 */ // 0x805DE834
    /* lis r0, -0x8000 */ // 0x805DE838
    /* slwi r4, r4, 2 */ // 0x805DE83C
    *(4 + r3) = r0; // stw @ 0x805DE840
    r5 = r5 + 0; // 0x805DE844
    /* lwzx r0, r5, r4 */ // 0x805DE848
    *(0 + r3) = r0; // stw @ 0x805DE84C
    return;
}