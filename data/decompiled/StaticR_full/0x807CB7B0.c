/* Function at 0x807CB7B0, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807CB7B0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807CB7C0
    r31 = r31 + 0; // 0x807CB7C4
    *(0x28 + r1) = r30; // stw @ 0x807CB7C8
    r30 = r3;
    r4 = r30 + 0xf0; // 0x807CB7D4
    r5 = r30 + 0xfc; // 0x807CB7D8
    FUN_805C6D88(r3, r4, r5); // bl 0x805C6D88
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
}