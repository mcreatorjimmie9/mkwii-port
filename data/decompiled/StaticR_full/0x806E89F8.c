/* Function at 0x806E89F8, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806E89F8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stmw r26, 0x18(r1) */ // 0x806E8A04
    r30 = r3;
    r4 = *(0x291c + r3); // lwz @ 0x806E8A0C
    /* xori r0, r4, 0 */ // 0x806E8A10
    /* xori r4, r4, 1 */ // 0x806E8A14
    /* mulli r0, r0, 0x58 */ // 0x806E8A18
    *(0x291c + r3) = r4; // stw @ 0x806E8A1C
    r3 = r3 + r0; // 0x806E8A20
    r31 = r3 + 0x38; // 0x806E8A24
    FUN_805E3430(); // bl 0x805E3430
}