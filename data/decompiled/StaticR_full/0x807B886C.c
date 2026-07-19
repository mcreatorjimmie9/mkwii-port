/* Function at 0x807B886C, size=352 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807B886C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B8874
    *(0xc + r1) = r31; // stw @ 0x807B887C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807B8884
    /* lis r30, 0 */ // 0x807B8888
    r30 = r30 + 0; // 0x807B888C
    r3 = *(0 + r4); // lwz @ 0x807B8890
    FUN_807BFFC0(); // bl 0x807BFFC0
    if (==) goto 0x0x807b88b4;
    if (==) goto 0x0x807b88d4;
    if (==) goto 0x0x807b8930;
    /* b 0x807b8988 */ // 0x807B88B0
    r4 = *(0x1a4 + r31); // lwz @ 0x807B88B4
    /* li r3, 0 */ // 0x807B88B8
    /* li r0, 0x64 */ // 0x807B88BC
    *(0 + r4) = r3; // stw @ 0x807B88C0
    *(4 + r4) = r3; // stw @ 0x807B88C4
    *(8 + r4) = r0; // stw @ 0x807B88C8
    *(0xc + r4) = r3; // stw @ 0x807B88CC
    /* b 0x807b8988 */ // 0x807B88D0
    r0 = *(0x1b4 + r31); // lbz @ 0x807B88D4
    if (==) goto 0x0x807b8908;
    r4 = *(0x1a4 + r31); // lwz @ 0x807B88E0
    /* li r0, 0 */ // 0x807B88E4
    r3 = *(0x2e + r30); // lha @ 0x807B88E8
    *(0 + r4) = r3; // stw @ 0x807B88EC
    r3 = *(0x30 + r30); // lha @ 0x807B88F0
    *(4 + r4) = r3; // stw @ 0x807B88F4
    r3 = *(0x32 + r30); // lha @ 0x807B88F8
    *(8 + r4) = r3; // stw @ 0x807B88FC
    *(0xc + r4) = r0; // stw @ 0x807B8900
    /* b 0x807b8988 */ // 0x807B8904
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8908
    /* li r0, 0 */ // 0x807B890C
    r3 = *(0x28 + r30); // lha @ 0x807B8910
    *(0 + r4) = r3; // stw @ 0x807B8914
    r3 = *(0x2a + r30); // lha @ 0x807B8918
    *(4 + r4) = r3; // stw @ 0x807B891C
    r3 = *(0x2c + r30); // lha @ 0x807B8920
    *(8 + r4) = r3; // stw @ 0x807B8924
    *(0xc + r4) = r0; // stw @ 0x807B8928
    /* b 0x807b8988 */ // 0x807B892C
    r0 = *(0x1b4 + r31); // lbz @ 0x807B8930
    if (==) goto 0x0x807b8964;
    r4 = *(0x1a4 + r31); // lwz @ 0x807B893C
    /* li r0, 0 */ // 0x807B8940
    r3 = *(0x3a + r30); // lha @ 0x807B8944
    *(0 + r4) = r3; // stw @ 0x807B8948
    r3 = *(0x3c + r30); // lha @ 0x807B894C
    *(4 + r4) = r3; // stw @ 0x807B8950
    r3 = *(0x3e + r30); // lha @ 0x807B8954
    *(8 + r4) = r3; // stw @ 0x807B8958
    *(0xc + r4) = r0; // stw @ 0x807B895C
    /* b 0x807b8988 */ // 0x807B8960
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8964
    /* li r0, 0 */ // 0x807B8968
    r3 = *(0x34 + r30); // lha @ 0x807B896C
    *(0 + r4) = r3; // stw @ 0x807B8970
    r3 = *(0x36 + r30); // lha @ 0x807B8974
    *(4 + r4) = r3; // stw @ 0x807B8978
    r3 = *(0x38 + r30); // lha @ 0x807B897C
    *(8 + r4) = r3; // stw @ 0x807B8980
    *(0xc + r4) = r0; // stw @ 0x807B8984
    r3 = *(0x1a0 + r31); // lwz @ 0x807B8988
    /* li r0, 3 */ // 0x807B898C
    *(0x5c + r31) = r0; // stw @ 0x807B8990
    /* li r0, 0 */ // 0x807B8994
    *(0x1a8 + r31) = r0; // stw @ 0x807B8998
    *(0x1ac + r31) = r0; // stw @ 0x807B899C
    *(0x4c + r3) = r0; // stw @ 0x807B89A0
    *(0x54 + r3) = r0; // stw @ 0x807B89A4
    r3 = *(0x19c + r31); // lwz @ 0x807B89A8
    *(0x4c + r3) = r0; // stw @ 0x807B89AC
    *(0x54 + r3) = r0; // stw @ 0x807B89B0
    r31 = *(0xc + r1); // lwz @ 0x807B89B4
    r30 = *(8 + r1); // lwz @ 0x807B89B8
    r0 = *(0x14 + r1); // lwz @ 0x807B89BC
    return;
}