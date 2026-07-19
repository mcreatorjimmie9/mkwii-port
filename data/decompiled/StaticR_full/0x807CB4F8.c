/* Function at 0x807CB4F8, size=92 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807CB4F8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x807CB50C
    r30 = r3;
    FUN_807CB4DC(r3); // bl 0x807CB4DC
    /* lfs f1, 0x168(r31) */ // 0x807CB51C
    r4 = r31 + 0x15c; // 0x807CB524
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    r3 = r30;
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x34 + r1); // lwz @ 0x807CB53C
    r31 = *(0x2c + r1); // lwz @ 0x807CB540
    r30 = *(0x28 + r1); // lwz @ 0x807CB544
    return;
}