/* Function at 0x80871B68, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80871B68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0xff */ // 0x80871B70
    *(0x2c + r1) = r31; // stw @ 0x80871B78
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x80871B80
    r30 = r3;
    r3 = *(0x1b4 + r3); // lwz @ 0x80871B88
    FUN_80872140(); // bl 0x80872140
    /* lis r4, 0 */ // 0x80871B90
    r4 = r4 + 0; // 0x80871B98
    r6 = r31 + 1; // 0x80871B9C
    r5 = r4 + 0x1f2; // 0x80871BA0
    /* li r4, 0x20 */ // 0x80871BA4
    /* crclr cr1eq */ // 0x80871BA8
    FUN_805E3430(r4, r6, r5, r4); // bl 0x805E3430
}