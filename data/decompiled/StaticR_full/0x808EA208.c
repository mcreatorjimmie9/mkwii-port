/* Function at 0x808EA208, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808EA208(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808EA218
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EA220
    r30 = r3;
    if (==) goto 0x0x808ea26c;
    /* li r4, -1 */ // 0x808EA22C
    r3 = r3 + 0x430; // 0x808EA230
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    if (==) goto 0x0x808ea25c;
    /* addic. r3, r30, 0x54 */ // 0x808EA240
    if (==) goto 0x0x808ea250;
    /* li r4, 0 */ // 0x808EA248
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808EA254
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808ea26c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EA270
    r30 = *(8 + r1); // lwz @ 0x808EA274
    r0 = *(0x14 + r1); // lwz @ 0x808EA278
    return;
}