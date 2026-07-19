/* Function at 0x808BEDBC, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808BEDBC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808BEDCC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808BEDD4
    r30 = r3;
    if (==) goto 0x0x808bee3c;
    /* addic. r3, r3, 0x87c */ // 0x808BEDE0
    if (==) goto 0x0x808bedf0;
    /* li r4, 0 */ // 0x808BEDE8
    FUN_806A0540(r4); // bl 0x806A0540
    r3 = r30 + 0x6f8; // 0x808BEDF0
    /* li r4, -1 */ // 0x808BEDF4
    FUN_806CABB4(r4, r3, r4); // bl 0x806CABB4
    r3 = r30 + 0x430; // 0x808BEDFC
    /* li r4, -1 */ // 0x808BEE00
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808bee2c;
    /* addic. r3, r30, 0x54 */ // 0x808BEE10
    if (==) goto 0x0x808bee20;
    /* li r4, 0 */ // 0x808BEE18
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808BEE24
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808bee3c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808BEE40
    r30 = *(8 + r1); // lwz @ 0x808BEE44
    r0 = *(0x14 + r1); // lwz @ 0x808BEE48
    return;
}