/* Function at 0x80791F28, size=356 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80791F28(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80791F40
    r29 = r3;
    r3 = r3 + 0x8c; // 0x80791F48
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x80791f60;
    /* li r3, 0 */ // 0x80791F58
    /* b 0x80792078 */ // 0x80791F5C
    r3 = *(0x80 + r29); // lwz @ 0x80791F60
    /* li r31, 0 */ // 0x80791F64
    if (==) goto 0x0x80791f90;
    if (==) goto 0x0x80791f7c;
    r0 = *(0x90 + r3); // lwz @ 0x80791F74
    /* b 0x80791f80 */ // 0x80791F78
    /* li r0, -1 */ // 0x80791F7C
    if (!=) goto 0x0x80791f90;
    r31 = r29 + 0x80; // 0x80791F88
    /* b 0x80791fb8 */ // 0x80791F8C
    r3 = *(0x84 + r29); // lwz @ 0x80791F90
    if (==) goto 0x0x80791fb8;
    if (==) goto 0x0x80791fa8;
    r0 = *(0x90 + r3); // lwz @ 0x80791FA0
    /* b 0x80791fac */ // 0x80791FA4
    /* li r0, -1 */ // 0x80791FA8
    if (!=) goto 0x0x80791fb8;
    r31 = r29 + 0x84; // 0x80791FB4
    if (!=) goto 0x0x80792050;
    r3 = *(0x80 + r29); // lwz @ 0x80791FC0
    if (!=) goto 0x0x80791fd4;
    r31 = r29 + 0x80; // 0x80791FCC
    /* b 0x80792050 */ // 0x80791FD0
    if (==) goto 0x0x80791fe0;
    r0 = *(0x90 + r3); // lwz @ 0x80791FD8
    /* b 0x80791fe4 */ // 0x80791FDC
    /* li r0, -1 */ // 0x80791FE0
    *(8 + r1) = r0; // stw @ 0x80791FE4
    r3 = *(0x84 + r29); // lwz @ 0x80791FE8
    if (!=) goto 0x0x80791ffc;
    r31 = r29 + 0x84; // 0x80791FF4
    /* b 0x80792050 */ // 0x80791FF8
    if (==) goto 0x0x80792008;
    r0 = *(0x90 + r3); // lwz @ 0x80792000
    /* b 0x8079200c */ // 0x80792004
    /* li r0, -1 */ // 0x80792008
    *(0xc + r1) = r0; // stw @ 0x8079200C
    r4 = r30;
    r3 = r29 + 0x8c; // 0x80792014
    /* li r6, 2 */ // 0x8079201C
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x80792034;
    /* li r31, 0 */ // 0x8079202C
    /* b 0x80792050 */ // 0x80792030
    /* slwi r0, r3, 2 */ // 0x80792034
    r31 = r29 + r0; // 0x80792038
    r3 = *(0x80 + r31); // lwzu @ 0x8079203C
    if (==) goto 0x0x80792050;
    /* li r4, 0 */ // 0x80792048
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80792074;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80792064
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80792078 */ // 0x80792070
    /* li r3, 0 */ // 0x80792074
    r0 = *(0x24 + r1); // lwz @ 0x80792078
    r31 = *(0x1c + r1); // lwz @ 0x8079207C
    r30 = *(0x18 + r1); // lwz @ 0x80792080
    r29 = *(0x14 + r1); // lwz @ 0x80792084
}