/* Function at 0x8066C34C, size=48 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8066C34C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8066C354
    r6 = r4;
    *(0x74 + r1) = r0; // stw @ 0x8066C35C
    r5 = r5 + 0; // 0x8066C360
    /* li r4, 0x5f */ // 0x8066C364
    *(0x6c + r1) = r31; // stw @ 0x8066C368
    r31 = r3;
    /* crclr cr1eq */ // 0x8066C374
    FUN_805E3430(r4, r3); // bl 0x805E3430
}