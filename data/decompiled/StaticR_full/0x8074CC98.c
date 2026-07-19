/* Function at 0x8074CC98, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8074CC98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8074CCB0
    *(0x10 + r1) = r28; // stw @ 0x8074CCB4
    r28 = r4;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8074CCC0
    r3 = r3 + 0; // 0x8074CCC4
    *(0 + r31) = r3; // stw @ 0x8074CCC8
    r3 = *(0 + r28); // lwz @ 0x8074CCCC
    r0 = *(0x2e + r3); // lha @ 0x8074CCD0
    *(0xb0 + r31) = r0; // stw @ 0x8074CCD4
    if (!=) goto 0x0x8074cce8;
    /* li r0, 0x258 */ // 0x8074CCE0
    *(0xb0 + r31) = r0; // stw @ 0x8074CCE4
    /* lis r5, 0 */ // 0x8074CCE8
    /* li r28, 0 */ // 0x8074CCEC
    r5 = r5 + 0; // 0x8074CCF0
    /* lis r29, 0 */ // 0x8074CCF4
    r4 = r5 + 0xf4; // 0x8074CCF8
    /* li r6, -1 */ // 0x8074CCFC
    r30 = r29 + 0; // 0x8074CD00
    /* li r0, 3 */ // 0x8074CD04
    *(0x12c + r31) = r28; // sth @ 0x8074CD08
    /* li r3, 6 */ // 0x8074CD0C
    *(0x130 + r31) = r6; // stw @ 0x8074CD10
    *(0x134 + r31) = r28; // stw @ 0x8074CD14
    *(0 + r31) = r5; // stw @ 0x8074CD18
    *(0x128 + r31) = r4; // stw @ 0x8074CD1C
    *(0x144 + r31) = r31; // stw @ 0x8074CD20
    *(0x140 + r31) = r30; // stw @ 0x8074CD24
    *(0x138 + r31) = r0; // sth @ 0x8074CD28
    FUN_805E3430(); // bl 0x805E3430
}