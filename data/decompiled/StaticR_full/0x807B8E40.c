/* Function at 0x807B8E40, size=468 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B8E40(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B8E48
    *(0xc + r1) = r31; // stw @ 0x807B8E50
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807B8E58
    /* lis r30, 0 */ // 0x807B8E5C
    r30 = r30 + 0; // 0x807B8E60
    r3 = *(0 + r4); // lwz @ 0x807B8E64
    FUN_807BFFC0(); // bl 0x807BFFC0
    if (==) goto 0x0x807b8e88;
    if (==) goto 0x0x807b8ea8;
    if (==) goto 0x0x807b8f04;
    /* b 0x807b8f5c */ // 0x807B8E84
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8E88
    /* li r3, 0 */ // 0x807B8E8C
    /* li r0, 0x64 */ // 0x807B8E90
    *(0 + r4) = r3; // stw @ 0x807B8E94
    *(4 + r4) = r3; // stw @ 0x807B8E98
    *(8 + r4) = r0; // stw @ 0x807B8E9C
    *(0xc + r4) = r3; // stw @ 0x807B8EA0
    /* b 0x807b8f5c */ // 0x807B8EA4
    r0 = *(0x1b4 + r31); // lbz @ 0x807B8EA8
    if (==) goto 0x0x807b8edc;
    r3 = *(0x1a4 + r31); // lwz @ 0x807B8EB4
    r0 = *(0x5a + r30); // lha @ 0x807B8EB8
    *(0 + r3) = r0; // stw @ 0x807B8EBC
    r0 = *(0x5c + r30); // lha @ 0x807B8EC0
    *(4 + r3) = r0; // stw @ 0x807B8EC4
    r0 = *(0x5e + r30); // lha @ 0x807B8EC8
    *(8 + r3) = r0; // stw @ 0x807B8ECC
    r0 = *(0x60 + r30); // lha @ 0x807B8ED0
    *(0xc + r3) = r0; // stw @ 0x807B8ED4
    /* b 0x807b8f5c */ // 0x807B8ED8
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8EDC
    /* li r0, 0 */ // 0x807B8EE0
    r3 = *(0x54 + r30); // lha @ 0x807B8EE4
    *(0 + r4) = r3; // stw @ 0x807B8EE8
    r3 = *(0x56 + r30); // lha @ 0x807B8EEC
    *(4 + r4) = r3; // stw @ 0x807B8EF0
    r3 = *(0x58 + r30); // lha @ 0x807B8EF4
    *(8 + r4) = r3; // stw @ 0x807B8EF8
    *(0xc + r4) = r0; // stw @ 0x807B8EFC
    /* b 0x807b8f5c */ // 0x807B8F00
    r0 = *(0x1b4 + r31); // lbz @ 0x807B8F04
    if (==) goto 0x0x807b8f38;
    r3 = *(0x1a4 + r31); // lwz @ 0x807B8F10
    r0 = *(0x68 + r30); // lha @ 0x807B8F14
    *(0 + r3) = r0; // stw @ 0x807B8F18
    r0 = *(0x6a + r30); // lha @ 0x807B8F1C
    *(4 + r3) = r0; // stw @ 0x807B8F20
    r0 = *(0x6c + r30); // lha @ 0x807B8F24
    *(8 + r3) = r0; // stw @ 0x807B8F28
    r0 = *(0x6e + r30); // lha @ 0x807B8F2C
    *(0xc + r3) = r0; // stw @ 0x807B8F30
    /* b 0x807b8f5c */ // 0x807B8F34
    r4 = *(0x1a4 + r31); // lwz @ 0x807B8F38
    /* li r0, 0 */ // 0x807B8F3C
    r3 = *(0x62 + r30); // lha @ 0x807B8F40
    *(0 + r4) = r3; // stw @ 0x807B8F44
    r3 = *(0x64 + r30); // lha @ 0x807B8F48
    *(4 + r4) = r3; // stw @ 0x807B8F4C
    r3 = *(0x66 + r30); // lha @ 0x807B8F50
    *(8 + r4) = r3; // stw @ 0x807B8F54
    *(0xc + r4) = r0; // stw @ 0x807B8F58
    /* lis r3, 0 */ // 0x807B8F5C
    /* li r4, 0x64 */ // 0x807B8F60
    r3 = *(0 + r3); // lwz @ 0x807B8F64
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r5 = *(0x1a4 + r31); // lwz @ 0x807B8F6C
    r0 = *(0 + r5); // lwz @ 0x807B8F70
    if (>=) goto 0x0x807b8f88;
    /* li r0, 6 */ // 0x807B8F7C
    *(0x5c + r31) = r0; // stw @ 0x807B8F80
    /* b 0x807b8fe4 */ // 0x807B8F84
    r4 = *(4 + r5); // lwz @ 0x807B8F88
    r0 = r0 + r4; // 0x807B8F8C
    if (>=) goto 0x0x807b8fa4;
    /* li r0, 6 */ // 0x807B8F98
    *(0x5c + r31) = r0; // stw @ 0x807B8F9C
    /* b 0x807b8fe4 */ // 0x807B8FA0
    r4 = *(8 + r5); // lwz @ 0x807B8FA4
    r4 = r0 + r4; // 0x807B8FA8
    if (>=) goto 0x0x807b8fc0;
    /* li r0, 2 */ // 0x807B8FB4
    *(0x5c + r31) = r0; // stw @ 0x807B8FB8
    /* b 0x807b8fe4 */ // 0x807B8FBC
    r0 = *(0xc + r5); // lwz @ 0x807B8FC0
    r0 = r4 + r0; // 0x807B8FC4
    if (>=) goto 0x0x807b8fdc;
    /* li r0, 5 */ // 0x807B8FD0
    *(0x5c + r31) = r0; // stw @ 0x807B8FD4
    /* b 0x807b8fe4 */ // 0x807B8FD8
    /* li r0, 2 */ // 0x807B8FDC
    *(0x5c + r31) = r0; // stw @ 0x807B8FE0
    r3 = *(0x194 + r31); // lwz @ 0x807B8FE4
    /* li r0, 0 */ // 0x807B8FE8
    *(8 + r3) = r0; // stw @ 0x807B8FEC
    r3 = *(0x19c + r31); // lwz @ 0x807B8FF0
    *(0x4c + r3) = r0; // stw @ 0x807B8FF4
    *(0x54 + r3) = r0; // stw @ 0x807B8FF8
    r31 = *(0xc + r1); // lwz @ 0x807B8FFC
    r30 = *(8 + r1); // lwz @ 0x807B9000
    r0 = *(0x14 + r1); // lwz @ 0x807B9004
    return;
}