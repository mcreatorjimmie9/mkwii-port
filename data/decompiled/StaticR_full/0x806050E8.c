/* Function at 0x806050E8, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806050E8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806050FC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80605104
    r29 = r3;
    r3 = r6;
    r7 = *(0x10 + r29); // lbz @ 0x80605110
    r6 = r29;
    FUN_80857838(r3, r6); // bl 0x80857838
    r3 = *(0 + r30); // lwz @ 0x8060511C
    r4 = *(0xc + r29); // lwz @ 0x80605120
    FUN_805EEFD4(r6); // bl 0x805EEFD4
    r3 = *(0 + r31); // lwz @ 0x80605128
    if (==) goto 0x0x8060513c;
    r4 = *(0xc + r29); // lwz @ 0x80605134
    FUN_805EEFD4(); // bl 0x805EEFD4
    r0 = *(0x24 + r1); // lwz @ 0x8060513C
    r31 = *(0x1c + r1); // lwz @ 0x80605140
    r30 = *(0x18 + r1); // lwz @ 0x80605144
    r29 = *(0x14 + r1); // lwz @ 0x80605148
    return;
}