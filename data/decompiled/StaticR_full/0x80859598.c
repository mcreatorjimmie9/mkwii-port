/* Function at 0x80859598, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80859598(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808595AC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808595B4
    r29 = r3;
    if (==) goto 0x0x8085962c;
    if (==) goto 0x0x8085961c;
    /* lis r4, 0 */ // 0x808595C4
    /* li r5, 0x1c */ // 0x808595C8
    r4 = r4 + 0; // 0x808595CC
    /* li r6, 2 */ // 0x808595D0
    r3 = r3 + 0x500; // 0x808595D4
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* lis r31, 0 */ // 0x808595DC
    r3 = r29 + 0x3f4; // 0x808595E0
    r4 = r31 + 0; // 0x808595E4
    /* li r5, 0xc */ // 0x808595E8
    /* li r6, 0xf */ // 0x808595EC
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x388; // 0x808595F4
    r4 = r31 + 0; // 0x808595F8
    /* li r5, 0xc */ // 0x808595FC
    /* li r6, 4 */ // 0x80859600
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x358; // 0x80859608
}