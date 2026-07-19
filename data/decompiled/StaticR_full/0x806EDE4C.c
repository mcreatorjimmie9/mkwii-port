/* Function at 0x806EDE4C, size=844 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806EDE4C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806EDE54
    /* li r6, 0 */ // 0x806EDE58
    *(0x34 + r1) = r0; // stw @ 0x806EDE5C
    /* li r0, 2 */ // 0x806EDE60
    *(0x2c + r1) = r31; // stw @ 0x806EDE64
    r31 = r3;
    /* li r3, 1 */ // 0x806EDE6C
    *(0x28 + r1) = r30; // stw @ 0x806EDE70
    /* li r30, 0 */ // 0x806EDE74
    r5 = *(0 + r4); // lwz @ 0x806EDE78
    r4 = *(0x291c + r5); // lwz @ 0x806EDE7C
    /* mulli r4, r4, 0x58 */ // 0x806EDE80
    r4 = r5 + r4; // 0x806EDE84
    r4 = *(0x48 + r4); // lwz @ 0x806EDE88
    /* mtctr r0 */ // 0x806EDE8C
    /* clrlwi r0, r6, 0x18 */ // 0x806EDE90
    r0 = r3 << r0; // slw
    /* and. r0, r0, r4 */ // 0x806EDE98
    if (==) goto 0x0x806edea4;
    r30 = r30 + 1; // 0x806EDEA0
    r6 = r6 + 1; // 0x806EDEA4
    /* clrlwi r0, r6, 0x18 */ // 0x806EDEA8
    r0 = r3 << r0; // slw
    /* and. r0, r0, r4 */ // 0x806EDEB0
    if (==) goto 0x0x806edebc;
    r30 = r30 + 1; // 0x806EDEB8
    r6 = r6 + 1; // 0x806EDEBC
    /* clrlwi r0, r6, 0x18 */ // 0x806EDEC0
    r0 = r3 << r0; // slw
    /* and. r0, r0, r4 */ // 0x806EDEC8
    if (==) goto 0x0x806eded4;
    r30 = r30 + 1; // 0x806EDED0
    r6 = r6 + 1; // 0x806EDED4
    /* clrlwi r0, r6, 0x18 */ // 0x806EDED8
    r0 = r3 << r0; // slw
    /* and. r0, r0, r4 */ // 0x806EDEE0
    if (==) goto 0x0x806edeec;
    r30 = r30 + 1; // 0x806EDEE8
    r6 = r6 + 1; // 0x806EDEEC
    /* clrlwi r0, r6, 0x18 */ // 0x806EDEF0
    r0 = r3 << r0; // slw
    /* and. r0, r0, r4 */ // 0x806EDEF8
    if (==) goto 0x0x806edf04;
    r30 = r30 + 1; // 0x806EDF00
    r6 = r6 + 1; // 0x806EDF04
    /* clrlwi r0, r6, 0x18 */ // 0x806EDF08
    r0 = r3 << r0; // slw
    /* and. r0, r0, r4 */ // 0x806EDF10
    if (==) goto 0x0x806edf1c;
    r30 = r30 + 1; // 0x806EDF18
    r6 = r6 + 1; // 0x806EDF1C
    if (counter-- != 0) goto 0x0x806ede90;
    if (<=) goto 0x0x806ee180;
    FUN_805E34E4(r6, r3); // bl 0x805E34E4
    r4 = r30;
    FUN_805E364C(r3, r4, r3); // bl 0x805E364C
    /* lis r4, 0 */ // 0x806EDF40
    /* li r0, 0xc */ // 0x806EDF44
    r8 = *(0 + r4); // lwz @ 0x806EDF48
    /* li r9, 0 */ // 0x806EDF4C
    /* li r4, 0 */ // 0x806EDF50
    /* li r7, 1 */ // 0x806EDF54
    /* mtctr r0 */ // 0x806EDF58
    r5 = *(0x291c + r8); // lwz @ 0x806EDF5C
    /* clrlwi r0, r4, 0x18 */ // 0x806EDF60
    r6 = r7 << r0; // slw
    /* mulli r5, r5, 0x58 */ // 0x806EDF68
    r5 = r8 + r5; // 0x806EDF6C
    r5 = *(0x48 + r5); // lwz @ 0x806EDF70
    /* and. r5, r6, r5 */ // 0x806EDF74
    if (==) goto 0x0x806ee064;
    if (!=) goto 0x0x806ee060;
    *(0x3e + r31) = r4; // stb @ 0x806EDF84
    /* lis r3, 0 */ // 0x806EDF88
    r7 = *(0 + r3); // lwz @ 0x806EDF8C
    r3 = *(0x291c + r7); // lwz @ 0x806EDF90
    /* mulli r3, r3, 0x58 */ // 0x806EDF94
    r3 = r7 + r3; // 0x806EDF98
    r6 = *(0x59 + r3); // lbz @ 0x806EDF9C
    if (!=) goto 0x0x806ee000;
    r3 = r4 rlwinm 2; // rlwinm
    /* li r5, 0 */ // 0x806EDFAC
    r4 = r3 + r7; // 0x806EDFB0
    /* b 0x806edfbc */ // 0x806EDFB4
    r5 = r5 + 1; // 0x806EDFB8
    if (==) goto 0x0x806edfd8;
    r3 = *(0x291c + r7); // lwz @ 0x806EDFC4
    /* mulli r3, r3, 0x58 */ // 0x806EDFC8
    r3 = r3 + r4; // 0x806EDFCC
    r3 = *(0x5b + r3); // lbz @ 0x806EDFD0
    /* b 0x806edfe8 */ // 0x806EDFD4
    r3 = *(0x291c + r7); // lwz @ 0x806EDFD8
    /* mulli r3, r3, 0x58 */ // 0x806EDFDC
    r3 = r7 + r3; // 0x806EDFE0
    r3 = *(0x58 + r3); // lbz @ 0x806EDFE4
    if (<) goto 0x0x806edfb8;
    r0 = *(0x1e + r31); // lbz @ 0x806EDFF0
    /* extsb r0, r0 */ // 0x806EDFF4
    *(0x3c + r31) = r0; // stb @ 0x806EDFF8
    /* b 0x806ee06c */ // 0x806EDFFC
    r3 = r4 rlwinm 2; // rlwinm
    /* li r8, 0 */ // 0x806EE004
    r5 = r3 + r7; // 0x806EE008
    /* b 0x806ee014 */ // 0x806EE00C
    r8 = r8 + 1; // 0x806EE010
    if (==) goto 0x0x806ee030;
    r3 = *(0x291c + r7); // lwz @ 0x806EE01C
    /* mulli r3, r3, 0x58 */ // 0x806EE020
    r3 = r3 + r5; // 0x806EE024
    r3 = *(0x5b + r3); // lbz @ 0x806EE028
    /* b 0x806ee040 */ // 0x806EE02C
    r3 = *(0x291c + r7); // lwz @ 0x806EE030
    /* mulli r3, r3, 0x58 */ // 0x806EE034
    r3 = r7 + r3; // 0x806EE038
    r3 = *(0x58 + r3); // lbz @ 0x806EE03C
    if (<) goto 0x0x806ee010;
    /* mulli r0, r4, 0x38 */ // 0x806EE048
    r3 = r31 + r0; // 0x806EE04C
    r0 = *(0x56 + r3); // lbz @ 0x806EE050
    /* extsb r0, r0 */ // 0x806EE054
    *(0x3c + r31) = r0; // stb @ 0x806EE058
    /* b 0x806ee06c */ // 0x806EE05C
    r9 = r9 + 1; // 0x806EE060
    r4 = r4 + 1; // 0x806EE064
    if (counter-- != 0) goto 0x0x806edf5c;
    r0 = *(0x3c + r31); // lbz @ 0x806EE06C
    /* extsb r0, r0 */ // 0x806EE070
    if (!=) goto 0x0x806ee174;
    r0 = *(0 + r31); // lwz @ 0x806EE07C
    if (==) goto 0x0x806ee090;
    if (!=) goto 0x0x806ee100;
    /* li r4, 0x20 */ // 0x806EE094
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* lis r4, 0 */ // 0x806EE09C
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x806EE0A4
    r0 = *(0xb68 + r4); // lwz @ 0x806EE0A8
    if (!=) goto 0x0x806ee0f8;
    r0 = *(0xb70 + r4); // lwz @ 0x806EE0B4
    /* li r3, 0 */ // 0x806EE0B8
    if (<) goto 0x0x806ee0d0;
    if (>) goto 0x0x806ee0d0;
    /* li r3, 1 */ // 0x806EE0CC
    if (==) goto 0x0x806ee0f8;
    /* li r4, 0x1f */ // 0x806EE0DC
    FUN_805E364C(r3, r3, r4); // bl 0x805E364C
    r3 = r3 + r30; // 0x806EE0E4
    r30 = r3 + 1; // 0x806EE0E8
    if (<) goto 0x0x806ee0f8;
    r30 = r30 + -0x1f; // 0x806EE0F4
    *(0x3c + r31) = r30; // stb @ 0x806EE0F8
    /* b 0x806ee174 */ // 0x806EE0FC
    /* li r4, 0xa */ // 0x806EE104
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* lis r4, 0 */ // 0x806EE10C
    r0 = r3 + 0x20; // 0x806EE110
    r4 = *(0 + r4); // lwz @ 0x806EE114
    r30 = r3;
    r3 = *(0xb68 + r4); // lwz @ 0x806EE11C
    if (!=) goto 0x0x806ee16c;
    r0 = *(0xb70 + r4); // lwz @ 0x806EE128
    /* li r3, 0 */ // 0x806EE12C
    if (<) goto 0x0x806ee144;
    if (>) goto 0x0x806ee144;
    /* li r3, 1 */ // 0x806EE140
    if (==) goto 0x0x806ee16c;
    /* li r4, 9 */ // 0x806EE150
    FUN_805E364C(r3, r3, r4); // bl 0x805E364C
    r3 = r3 + r30; // 0x806EE158
    r30 = r3 + 1; // 0x806EE15C
    if (<) goto 0x0x806ee16c;
    r30 = r30 + -9; // 0x806EE168
    r0 = r30 + 0x20; // 0x806EE16C
    *(0x3c + r31) = r0; // stb @ 0x806EE170
    /* li r4, -1 */ // 0x806EE178
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x806EE180
    r31 = *(0x2c + r1); // lwz @ 0x806EE184
    r30 = *(0x28 + r1); // lwz @ 0x806EE188
    return;
}