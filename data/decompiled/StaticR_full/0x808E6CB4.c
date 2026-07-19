/* Function at 0x808E6CB4, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808E6CB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808E6CC8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E6CD0
    r29 = r3;
    if (==) goto 0x0x808e6d80;
    /* addic. r31, r3, 0xb54 */ // 0x808E6CDC
    if (==) goto 0x0x808e6d14;
    r3 = r31 + 0xd90; // 0x808E6CE4
    /* li r4, -1 */ // 0x808E6CE8
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808E6CF0
    r3 = r31 + 0x174; // 0x808E6CF4
    r4 = r4 + 0; // 0x808E6CF8
    /* li r5, 0x26c */ // 0x808E6CFC
    /* li r6, 5 */ // 0x808E6D00
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E6D0C
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0x6c8 */ // 0x808E6D14
    if (==) goto 0x0x808e6d40;
    /* lis r4, 0 */ // 0x808E6D1C
    r3 = r31 + 0x174; // 0x808E6D20
    r4 = r4 + 0; // 0x808E6D24
    /* li r5, 0x18c */ // 0x808E6D28
    /* li r6, 2 */ // 0x808E6D2C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E6D38
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    r3 = r29 + 0x430; // 0x808E6D40
    /* li r4, -1 */ // 0x808E6D44
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e6d70;
    /* addic. r3, r29, 0x54 */ // 0x808E6D54
    if (==) goto 0x0x808e6d64;
    /* li r4, 0 */ // 0x808E6D5C
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r29;
    /* li r4, 0 */ // 0x808E6D68
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e6d80;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808E6D80
    r3 = r29;
}