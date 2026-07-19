/* Function at 0x806A2C30, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806A2C30(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806A2C40
    r30 = r3;
    FUN_806A0780(); // bl 0x806A0780
    r3 = r30 + 0x98; // 0x806A2C4C
    /* li r4, 1 */ // 0x806A2C50
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A2C58
    if (==) goto 0x0x806a2c94;
    r3 = r30 + 0x98; // 0x806A2C64
    /* li r4, 0 */ // 0x806A2C68
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A2C70
    r4 = *(0 + r3); // lwz @ 0x806A2C74
    /* slwi r0, r0, 4 */ // 0x806A2C78
    /* lwzx r0, r4, r0 */ // 0x806A2C7C
    if (==) goto 0x0x806a2cc4;
    /* li r0, 1 */ // 0x806A2C88
    *(0x35 + r3) = r0; // stb @ 0x806A2C8C
    /* b 0x806a2cc4 */ // 0x806A2C90
    r3 = r30 + 0x98; // 0x806A2C94
    /* li r4, 0 */ // 0x806A2C98
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* li r0, 0 */ // 0x806A2CA0
    *(0x35 + r3) = r0; // stb @ 0x806A2CA4
    r3 = r30 + 0x98; // 0x806A2CA8
    /* li r4, 0 */ // 0x806A2CAC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A2CB4
    /* li r4, 0 */ // 0x806A2CB8
    /* lfs f1, 0(r5) */ // 0x806A2CBC
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    r0 = *(0x174 + r30); // lbz @ 0x806A2CC4
    /* li r31, 1 */ // 0x806A2CC8
    if (!=) goto 0x0x806a2cf0;
    r3 = r30 + 0x98; // 0x806A2CD4
    /* li r4, 3 */ // 0x806A2CD8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A2CE0
    if (==) goto 0x0x806a2cf0;
    /* li r31, 0 */ // 0x806A2CEC
    /* cntlzw r0, r31 */ // 0x806A2CF0
    r3 = *(0x184 + r30); // lwz @ 0x806A2CF4
    /* srwi r0, r0, 5 */ // 0x806A2CF8
    *(0x80 + r30) = r0; // stb @ 0x806A2CFC
    *(0x24 + r3) = r31; // stb @ 0x806A2D00
    r31 = *(0xc + r1); // lwz @ 0x806A2D04
    r30 = *(8 + r1); // lwz @ 0x806A2D08
    r0 = *(0x14 + r1); // lwz @ 0x806A2D0C
    return;
}