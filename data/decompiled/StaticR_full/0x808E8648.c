/* Function at 0x808E8648, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808E8648(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808E865C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E8664
    r29 = r3;
    if (==) goto 0x0x808e871c;
    /* addic. r31, r3, 0x1c94 */ // 0x808E8670
    if (==) goto 0x0x808e869c;
    /* lis r4, 0 */ // 0x808E8678
    r3 = r31 + 0x174; // 0x808E867C
    r4 = r4 + 0; // 0x808E8680
    /* li r5, 0x174 */ // 0x808E8684
    /* li r6, 8 */ // 0x808E8688
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E8694
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0x6c4 */ // 0x808E869C
    if (==) goto 0x0x808e86dc;
    /* addic. r3, r31, 0x1440 */ // 0x808E86A4
    if (==) goto 0x0x808e86b8;
    r3 = r3 + 0x18; // 0x808E86AC
    /* li r4, 0 */ // 0x808E86B0
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808E86B8
    r3 = r31 + 0x174; // 0x808E86BC
    r4 = r4 + 0; // 0x808E86C0
    /* li r5, 0x254 */ // 0x808E86C4
    /* li r6, 8 */ // 0x808E86C8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E86D4
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    r3 = r29 + 0x430; // 0x808E86DC
    /* li r4, -1 */ // 0x808E86E0
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e870c;
    /* addic. r3, r29, 0x54 */ // 0x808E86F0
    if (==) goto 0x0x808e8700;
    /* li r4, 0 */ // 0x808E86F8
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r29;
    /* li r4, 0 */ // 0x808E8704
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e871c;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808E871C
    r3 = r29;
}