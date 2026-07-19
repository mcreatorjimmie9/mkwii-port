/* Function at 0x80702E84, size=364 bytes */
/* Stack frame: 0 bytes */

int FUN_80702E84(int r3, int r4, int r5, int r6, int r7, int r8)
{
    r0 = *(0x41f4 + r3); // lwz @ 0x80702E84
    if (!=) goto 0x0x80702ecc;
    /* addis r5, r3, 1 */ // 0x80702E90
    r0 = *(0x58 + r3); // lwz @ 0x80702E94
    r5 = *(-0x7500 + r5); // lwz @ 0x80702E98
    if (>) goto 0x0x80702ecc;
    r0 = *(0x55 + r3); // lbz @ 0x80702EA4
    if (==) goto 0x0x80702ebc;
    if (==) goto 0x0x80702ec4;
    /* b 0x80702ecc */ // 0x80702EB8
    /* li r0, 1 */ // 0x80702EBC
    /* b 0x80702ed0 */ // 0x80702EC0
    /* li r0, 2 */ // 0x80702EC4
    /* b 0x80702ed0 */ // 0x80702EC8
    /* li r0, 3 */ // 0x80702ECC
    if (==) goto 0x0x80702fe8;
    /* lis r5, 0 */ // 0x80702ED8
    r7 = *(0 + r5); // lwz @ 0x80702EDC
    r0 = *(0x36 + r7); // lha @ 0x80702EE0
    if (<) goto 0x0x80702f08;
    /* lis r5, 1 */ // 0x80702EEC
    /* clrlwi r6, r0, 0x18 */ // 0x80702EF0
    r0 = r5 + -0x6c10; // 0x80702EF4
    r0 = r0 * r6; // 0x80702EF8
    r5 = r7 + r0; // 0x80702EFC
    r5 = r5 + 0x38; // 0x80702F00
    /* b 0x80702f0c */ // 0x80702F04
    /* li r5, 0 */ // 0x80702F08
    /* li r0, 5 */ // 0x80702F0C
    r7 = r5 + 0x5920; // 0x80702F10
    /* li r8, 0 */ // 0x80702F14
    /* mtctr r0 */ // 0x80702F18
    r5 = *(0x18 + r7); // lwz @ 0x80702F1C
    /* li r6, 0 */ // 0x80702F20
    r0 = *(0x58 + r3); // lwz @ 0x80702F24
    if (!=) goto 0x0x80702f40;
    r0 = *(0xa + r7); // lbz @ 0x80702F30
    if (==) goto 0x0x80702f40;
    /* li r6, 1 */ // 0x80702F3C
    if (!=) goto 0x0x80702f50;
    r3 = r8;
    return;
    r0 = *(0xa + r4); // lbz @ 0x80702F50
    if (!=) goto 0x0x80702f64;
    /* li r0, 0 */ // 0x80702F5C
    /* b 0x80702fcc */ // 0x80702F60
    r0 = *(0xa + r7); // lbz @ 0x80702F64
    if (!=) goto 0x0x80702f78;
    /* li r0, 1 */ // 0x80702F70
    /* b 0x80702fcc */ // 0x80702F74
    r0 = *(4 + r7); // lhz @ 0x80702F78
    r5 = *(4 + r4); // lhz @ 0x80702F7C
    if (>=) goto 0x0x80702f90;
    /* li r0, 1 */ // 0x80702F88
    /* b 0x80702fcc */ // 0x80702F8C
    if (!=) goto 0x0x80702fc8;
    r0 = *(6 + r7); // lbz @ 0x80702F94
    r5 = *(6 + r4); // lbz @ 0x80702F98
    if (>=) goto 0x0x80702fac;
    /* li r0, 1 */ // 0x80702FA4
    /* b 0x80702fcc */ // 0x80702FA8
    if (!=) goto 0x0x80702fc8;
    r5 = *(8 + r4); // lhz @ 0x80702FB0
    r0 = *(8 + r7); // lhz @ 0x80702FB4
    if (>=) goto 0x0x80702fc8;
    /* li r0, 1 */ // 0x80702FC0
    /* b 0x80702fcc */ // 0x80702FC4
    /* li r0, 0 */ // 0x80702FC8
    if (==) goto 0x0x80702fdc;
    r3 = r8;
    return;
    r7 = r7 + 0x1c; // 0x80702FDC
    r8 = r8 + 1; // 0x80702FE0
    if (counter-- != 0) goto 0x0x80702f1c;
    /* li r3, -1 */ // 0x80702FE8
    return;
}