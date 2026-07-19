/* Function at 0x805D000C, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D000C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r0, r4, 0xf0 */ // 0x805D0018
    /* lis r4, 0 */ // 0x805D001C
    *(0x2c + r1) = r31; // stw @ 0x805D0020
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805D0028
    r30 = r3;
    r6 = *(0 + r4); // lwz @ 0x805D0030
    /* lis r4, 0 */ // 0x805D0034
    r4 = r4 + 0; // 0x805D0038
    r3 = r6 + r0; // 0x805D003C
    r0 = *(0x30 + r3); // lwz @ 0x805D0040
    r5 = r4 + 0x120; // 0x805D0044
    /* li r4, 0x20 */ // 0x805D004C
    if (<) goto 0x0x805d0060;
    /* li r6, 0 */ // 0x805D0058
    /* b 0x805d0070 */ // 0x805D005C
    /* lis r6, 0 */ // 0x805D0060
    /* slwi r0, r0, 2 */ // 0x805D0064
    r6 = r6 + 0; // 0x805D0068
    /* lwzx r6, r6, r0 */ // 0x805D006C
    /* crclr cr1eq */ // 0x805D0070
    FUN_805E3430(r6, r6); // bl 0x805E3430
}