/* Function at 0x8080FC70, size=348 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8080FC70(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8080FC7C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8080FC84
    r12 = *(0x24 + r12); // lwz @ 0x8080FC88
    /* mtctr r12 */ // 0x8080FC8C
    /* bctrl  */ // 0x8080FC90
    /* clrlwi r0, r3, 0x10 */ // 0x8080FC94
    if (==) goto 0x0x8080fcbc;
    if (==) goto 0x0x8080fcfc;
    if (==) goto 0x0x8080fd3c;
    if (==) goto 0x0x8080fd7c;
    /* b 0x8080fdb8 */ // 0x8080FCB8
    r0 = *(0x14 + r31); // lwz @ 0x8080FCBC
    /* lis r3, 0 */ // 0x8080FCC0
    *(0x1c + r1) = r0; // stw @ 0x8080FCC4
    /* li r0, 0 */ // 0x8080FCC8
    r3 = r3 + 0; // 0x8080FCCC
    *(8 + r1) = r0; // stw @ 0x8080FCD4
    r6 = r3 + 0x12; // 0x8080FCD8
    /* li r4, 0 */ // 0x8080FCDC
    /* li r7, 3 */ // 0x8080FCE0
    r3 = *(8 + r31); // lwz @ 0x8080FCE4
    /* li r8, 0 */ // 0x8080FCE8
    /* li r9, 0 */ // 0x8080FCEC
    /* li r10, 9 */ // 0x8080FCF0
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    /* b 0x8080fdb8 */ // 0x8080FCF8
    r0 = *(0x14 + r31); // lwz @ 0x8080FCFC
    /* lis r3, 0 */ // 0x8080FD00
    *(0x18 + r1) = r0; // stw @ 0x8080FD04
    /* li r0, 0 */ // 0x8080FD08
    r3 = r3 + 0; // 0x8080FD0C
    *(8 + r1) = r0; // stw @ 0x8080FD14
    r6 = r3 + 0x1e; // 0x8080FD18
    /* li r4, 0 */ // 0x8080FD1C
    /* li r7, 3 */ // 0x8080FD20
    r3 = *(8 + r31); // lwz @ 0x8080FD24
    /* li r8, 0 */ // 0x8080FD28
    /* li r9, 0 */ // 0x8080FD2C
    /* li r10, 9 */ // 0x8080FD30
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    /* b 0x8080fdb8 */ // 0x8080FD38
    r0 = *(0x14 + r31); // lwz @ 0x8080FD3C
    /* lis r3, 0 */ // 0x8080FD40
    *(0x14 + r1) = r0; // stw @ 0x8080FD44
    /* li r0, 0 */ // 0x8080FD48
    r3 = r3 + 0; // 0x8080FD4C
    *(8 + r1) = r0; // stw @ 0x8080FD54
    r6 = r3 + 0x2b; // 0x8080FD58
    /* li r4, 0 */ // 0x8080FD5C
    /* li r7, 3 */ // 0x8080FD60
    r3 = *(8 + r31); // lwz @ 0x8080FD64
    /* li r8, 0 */ // 0x8080FD68
    /* li r9, 0 */ // 0x8080FD6C
    /* li r10, 9 */ // 0x8080FD70
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    /* b 0x8080fdb8 */ // 0x8080FD78
    r0 = *(0x14 + r31); // lwz @ 0x8080FD7C
    /* lis r3, 0 */ // 0x8080FD80
    *(0x10 + r1) = r0; // stw @ 0x8080FD84
    /* li r0, 0 */ // 0x8080FD88
    r3 = r3 + 0; // 0x8080FD8C
    *(8 + r1) = r0; // stw @ 0x8080FD94
    r6 = r3 + 0x37; // 0x8080FD98
    /* li r4, 0 */ // 0x8080FD9C
    /* li r7, 3 */ // 0x8080FDA0
    r3 = *(8 + r31); // lwz @ 0x8080FDA4
    /* li r8, 0 */ // 0x8080FDA8
    /* li r9, 0 */ // 0x8080FDAC
    /* li r10, 9 */ // 0x8080FDB0
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    r0 = *(0x34 + r1); // lwz @ 0x8080FDB8
    r31 = *(0x2c + r1); // lwz @ 0x8080FDBC
    return;
}