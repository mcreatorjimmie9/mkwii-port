/* Function at 0x806A4C10, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806A4C10(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x806A4C1C
    *(0x1c + r1) = r31; // stw @ 0x806A4C20
    /* li r31, 0 */ // 0x806A4C24
    if (==) goto 0x0x806a4c38;
    if (==) goto 0x0x806a4c4c;
    /* b 0x806a4c5c */ // 0x806A4C34
    /* li r4, 1 */ // 0x806A4C38
    r3 = r3 + 0x98; // 0x806A4C3C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    /* b 0x806a4c5c */ // 0x806A4C48
    /* li r4, 2 */ // 0x806A4C4C
    r3 = r3 + 0x98; // 0x806A4C50
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    r0 = *(0x38 + r31); // lwz @ 0x806A4C5C
    if (==) goto 0x0x806a4c74;
    if (==) goto 0x0x806a4c8c;
    /* b 0x806a4cdc */ // 0x806A4C70
    /* lis r4, 0 */ // 0x806A4C74
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806A4C7C
    /* li r4, 1 */ // 0x806A4C80
    FUN_8069F59C(r4, r3, r4); // bl 0x8069F59C
    /* b 0x806a4cdc */ // 0x806A4C88
    r3 = *(0 + r31); // lwz @ 0x806A4C8C
    /* slwi r0, r0, 4 */ // 0x806A4C90
    /* lwzx r3, r3, r0 */ // 0x806A4C94
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A4C9C
    /* lis r0, 0x4330 */ // 0x806A4CA0
    *(0xc + r1) = r4; // stw @ 0x806A4CA4
    /* lis r3, 0 */ // 0x806A4CA8
    /* lfd f3, 0(r3) */ // 0x806A4CAC
}