/* Function at 0x808F6878, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808F6878(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808F688C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808F6894
    r29 = r3;
    if (==) goto 0x0x808f695c;
    /* lis r4, 0 */ // 0x808F68A0
    /* li r5, 0x30 */ // 0x808F68A4
    r4 = r4 + 0; // 0x808F68A8
    /* li r6, 0x1d */ // 0x808F68AC
    r3 = r3 + 0x150; // 0x808F68B0
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* addic. r3, r29, 0x104 */ // 0x808F68B8
    if (==) goto 0x0x808f68c4;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    if (==) goto 0x0x808f694c;
    /* addic. r3, r29, 0xf8 */ // 0x808F68CC
    if (==) goto 0x0x808f68d8;
    FUN_805E3430(); // bl 0x805E3430
}