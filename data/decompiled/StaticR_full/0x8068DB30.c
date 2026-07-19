/* Function at 0x8068DB30, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8068DB30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068DB40
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068DB48
    r30 = r3;
    if (==) goto 0x0x8068db94;
    /* li r4, -1 */ // 0x8068DB54
    r3 = r3 + 0x14d4; // 0x8068DB58
    FUN_806A0540(r4, r3); // bl 0x806A0540
    /* lis r4, 0 */ // 0x8068DB60
    r3 = r30 + 0x174; // 0x8068DB64
    r4 = r4 + 0; // 0x8068DB68
    /* li r5, 0x26c */ // 0x8068DB6C
    /* li r6, 8 */ // 0x8068DB70
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068DB7C
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068db94;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}