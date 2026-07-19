/* Function at 0x80881F28, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80881F28(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80881F30
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x80881F38
    r6 = r6 + 0; // 0x80881F3C
    /* lis r4, 0 */ // 0x80881F40
    *(0xc + r1) = r31; // stw @ 0x80881F44
    r31 = r3;
    *(0 + r3) = r6; // stw @ 0x80881F4C
    /* li r6, 0 */ // 0x80881F50
    r3 = *(0 + r4); // lwz @ 0x80881F54
    /* li r4, 0 */ // 0x80881F58
    FUN_805CFD60(r6, r4); // bl 0x805CFD60
    *(4 + r31) = r3; // stw @ 0x80881F60
    r5 = r3 + 2; // 0x80881F64
    r4 = r5 + 2; // 0x80881F68
    r0 = *(0 + r3); // lha @ 0x80881F6C
    *(8 + r31) = r0; // sth @ 0x80881F70
    /* slwi r3, r0, 2 */ // 0x80881F74
    *(4 + r31) = r5; // stw @ 0x80881F78
    r0 = *(0 + r5); // lha @ 0x80881F7C
    *(0xa + r31) = r0; // sth @ 0x80881F80
    *(4 + r31) = r4; // stw @ 0x80881F84
    FUN_805E3430(); // bl 0x805E3430
}