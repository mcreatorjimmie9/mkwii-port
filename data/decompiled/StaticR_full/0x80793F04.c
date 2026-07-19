/* Function at 0x80793F04, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793F04(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r6, 0 */ // 0x80793F10
    *(0x14 + r1) = r0; // stw @ 0x80793F14
    r7 = r3;
    *(0xc + r1) = r31; // stw @ 0x80793F1C
    r9 = *(0x88 + r3); // lwz @ 0x80793F20
    /* mtctr r9 */ // 0x80793F24
    if (<=) goto 0x0x80793f6c;
    r8 = *(0x80 + r7); // lwz @ 0x80793F30
    if (==) goto 0x0x80793f44;
    r0 = *(0x90 + r8); // lwz @ 0x80793F3C
    /* b 0x80793f48 */ // 0x80793F40
    /* li r0, -1 */ // 0x80793F44
    if (!=) goto 0x0x80793f60;
    /* slwi r0, r6, 2 */ // 0x80793F50
    r4 = r3 + r0; // 0x80793F54
    r31 = r4 + 0x80; // 0x80793F58
    /* b 0x80793f70 */ // 0x80793F5C
    r7 = r7 + 4; // 0x80793F60
    r6 = r6 + 1; // 0x80793F64
    if (counter-- != 0) goto 0x0x80793f30;
    /* li r31, 0 */ // 0x80793F6C
    if (!=) goto 0x0x80793fb8;
    r6 = r3;
    /* li r4, 0 */ // 0x80793F7C
    /* mtctr r9 */ // 0x80793F80
    if (<=) goto 0x0x80793fb4;
    r0 = *(0x80 + r6); // lwz @ 0x80793F8C
    if (!=) goto 0x0x80793fa8;
    /* slwi r0, r4, 2 */ // 0x80793F98
    r4 = r3 + r0; // 0x80793F9C
    r31 = r4 + 0x80; // 0x80793FA0
    /* b 0x80793fb8 */ // 0x80793FA4
    r6 = r6 + 4; // 0x80793FA8
    r4 = r4 + 1; // 0x80793FAC
    if (counter-- != 0) goto 0x0x80793f8c;
    /* li r31, 0 */ // 0x80793FB4
    if (==) goto 0x0x80793fd4;
    r4 = r31;
    /* li r6, 0 */ // 0x80793FC4
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793fd8 */ // 0x80793FD0
    /* li r3, 0 */ // 0x80793FD4
    r0 = *(0x14 + r1); // lwz @ 0x80793FD8
    r31 = *(0xc + r1); // lwz @ 0x80793FDC
}