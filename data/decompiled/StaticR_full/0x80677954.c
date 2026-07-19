/* Function at 0x80677954, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80677954(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80677964
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8067796C
    r30 = r3;
    if (==) goto 0x0x80677a0c;
    /* li r4, -1 */ // 0x80677978
    r3 = r3 + 0x1cbc; // 0x8067797C
    FUN_8064ED24(r4, r3); // bl 0x8064ED24
    r3 = r30 + 0x1c20; // 0x80677984
    /* li r4, -1 */ // 0x80677988
    FUN_8066D714(r4, r3, r3, r4); // bl 0x8066D714
    /* addic. r3, r30, 0x1a94 */ // 0x80677990
    if (==) goto 0x0x806779a0;
    /* li r4, 0 */ // 0x80677998
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x1918; // 0x806779A0
    /* li r4, -1 */ // 0x806779A4
    FUN_8064EE50(r4, r3, r4); // bl 0x8064EE50
    /* addic. r3, r30, 0x17a4 */ // 0x806779AC
    if (==) goto 0x0x806779bc;
    /* li r4, 0 */ // 0x806779B4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x806779BC
    r3 = r30 + 0x304; // 0x806779C0
    r4 = r4 + 0; // 0x806779C4
    /* li r5, 0x1b8 */ // 0x806779C8
    /* li r6, 0xc */ // 0x806779CC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0x190 */ // 0x806779D4
    if (==) goto 0x0x806779e4;
    /* li r4, 0 */ // 0x806779DC
    FUN_806A0540(r6, r4); // bl 0x806A0540
    r3 = r30 + 0x48; // 0x806779E4
    /* li r4, -1 */ // 0x806779E8
    FUN_806688C8(r4, r3, r4); // bl 0x806688C8
}