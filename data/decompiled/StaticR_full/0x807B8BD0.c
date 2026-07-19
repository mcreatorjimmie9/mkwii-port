/* Function at 0x807B8BD0, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807B8BD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B8BD8
    *(0xc + r1) = r31; // stw @ 0x807B8BE0
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807B8BE8
    /* lis r30, 0 */ // 0x807B8BEC
    r30 = r30 + 0; // 0x807B8BF0
    r3 = *(0 + r4); // lwz @ 0x807B8BF4
    FUN_807BFFC0(); // bl 0x807BFFC0
    if (==) goto 0x0x807b8c18;
    if (==) goto 0x0x807b8c38;
    if (==) goto 0x0x807b8c90;
    /* b 0x807b8ce4 */ // 0x807B8C14
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8C18
    /* li r3, 0x32 */ // 0x807B8C1C
    /* li r0, 0 */ // 0x807B8C20
    *(0 + r4) = r3; // stw @ 0x807B8C24
    *(4 + r4) = r3; // stw @ 0x807B8C28
    *(8 + r4) = r0; // stw @ 0x807B8C2C
    *(0xc + r4) = r0; // stw @ 0x807B8C30
    /* b 0x807b8ce4 */ // 0x807B8C34
    r0 = *(0x1b4 + r31); // lbz @ 0x807B8C38
    if (==) goto 0x0x807b8c6c;
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8C44
    /* li r0, 0 */ // 0x807B8C48
    r3 = *(0x44 + r30); // lha @ 0x807B8C4C
    *(0 + r4) = r3; // stw @ 0x807B8C50
    r3 = *(0x46 + r30); // lha @ 0x807B8C54
    *(4 + r4) = r3; // stw @ 0x807B8C58
    r3 = *(0x48 + r30); // lha @ 0x807B8C5C
    *(8 + r4) = r3; // stw @ 0x807B8C60
    *(0xc + r4) = r0; // stw @ 0x807B8C64
    /* b 0x807b8ce4 */ // 0x807B8C68
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8C6C
    /* li r0, 0 */ // 0x807B8C70
    r3 = *(0x40 + r30); // lha @ 0x807B8C74
    *(0 + r4) = r3; // stw @ 0x807B8C78
    r3 = *(0x42 + r30); // lha @ 0x807B8C7C
    *(4 + r4) = r3; // stw @ 0x807B8C80
    *(8 + r4) = r0; // stw @ 0x807B8C84
    *(0xc + r4) = r0; // stw @ 0x807B8C88
    /* b 0x807b8ce4 */ // 0x807B8C8C
    r0 = *(0x1b4 + r31); // lbz @ 0x807B8C90
    if (==) goto 0x0x807b8cc4;
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8C9C
    /* li r0, 0 */ // 0x807B8CA0
    r3 = *(0x4e + r30); // lha @ 0x807B8CA4
    *(0 + r4) = r3; // stw @ 0x807B8CA8
    r3 = *(0x50 + r30); // lha @ 0x807B8CAC
    *(4 + r4) = r3; // stw @ 0x807B8CB0
    r3 = *(0x52 + r30); // lha @ 0x807B8CB4
    *(8 + r4) = r3; // stw @ 0x807B8CB8
    *(0xc + r4) = r0; // stw @ 0x807B8CBC
    /* b 0x807b8ce4 */ // 0x807B8CC0
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8CC4
    /* li r0, 0 */ // 0x807B8CC8
    r3 = *(0x4a + r30); // lha @ 0x807B8CCC
    *(0 + r4) = r3; // stw @ 0x807B8CD0
    r3 = *(0x4c + r30); // lha @ 0x807B8CD4
    *(4 + r4) = r3; // stw @ 0x807B8CD8
    *(8 + r4) = r0; // stw @ 0x807B8CDC
    *(0xc + r4) = r0; // stw @ 0x807B8CE0
    r3 = *(0x19c + r31); // lwz @ 0x807B8CE4
    /* li r0, 8 */ // 0x807B8CE8
    *(0x5c + r31) = r0; // stw @ 0x807B8CEC
    /* li r0, 0 */ // 0x807B8CF0
    *(0x1a8 + r31) = r0; // stw @ 0x807B8CF4
    *(0x1ac + r31) = r0; // stw @ 0x807B8CF8
    *(0x4c + r3) = r0; // stw @ 0x807B8CFC
    *(0x54 + r3) = r0; // stw @ 0x807B8D00
    r31 = *(0xc + r1); // lwz @ 0x807B8D04
    r30 = *(8 + r1); // lwz @ 0x807B8D08
    r0 = *(0x14 + r1); // lwz @ 0x807B8D0C
    return;
}