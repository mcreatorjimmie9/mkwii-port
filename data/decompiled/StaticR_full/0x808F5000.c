/* Function at 0x808F5000, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808F5000(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F500C
    r31 = r3;
    r0 = *(0x6ff + r3); // lbz @ 0x808F5014
    if (!=) goto 0x0x808f5028;
    /* li r3, 0 */ // 0x808F5020
    /* b 0x808f50a4 */ // 0x808F5024
    r3 = *(0x98 + r3); // lwz @ 0x808F5028
    FUN_8061ED48(r3); // bl 0x8061ED48
    if (==) goto 0x0x808f5070;
    r4 = *(0xfc + r31); // lwz @ 0x808F5038
    if (==) goto 0x0x808f5058;
    r3 = r31;
    /* li r5, 0xf */ // 0x808F5048
    FUN_808F5A58(r3, r5); // bl 0x808F5A58
    if (==) goto 0x0x808f5068;
    /* li r3, 0xf */ // 0x808F5058
    /* li r0, 0xa */ // 0x808F505C
    *(0xfc + r31) = r3; // stw @ 0x808F5060
    *(0x100 + r31) = r0; // stw @ 0x808F5064
    /* li r3, 1 */ // 0x808F5068
    /* b 0x808f50a4 */ // 0x808F506C
    r4 = *(0xfc + r31); // lwz @ 0x808F5070
    if (==) goto 0x0x808f5090;
    r3 = r31;
    /* li r5, 0x10 */ // 0x808F5080
    FUN_808F5A58(r3, r5); // bl 0x808F5A58
    if (==) goto 0x0x808f50a0;
    /* li r3, 0x10 */ // 0x808F5090
    /* li r0, 0x14 */ // 0x808F5094
    *(0xfc + r31) = r3; // stw @ 0x808F5098
    *(0x100 + r31) = r0; // stw @ 0x808F509C
    /* li r3, 1 */ // 0x808F50A0
    r0 = *(0x14 + r1); // lwz @ 0x808F50A4
    r31 = *(0xc + r1); // lwz @ 0x808F50A8
    return;
}