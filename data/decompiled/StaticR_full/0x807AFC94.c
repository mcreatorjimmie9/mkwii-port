/* Function at 0x807AFC94, size=92 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807AFC94(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807AFCA4
    r31 = r31 + 0; // 0x807AFCA8
    *(0x58 + r1) = r30; // stw @ 0x807AFCAC
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x807AFCB4
    r29 = r3;
    r4 = r29 + 0x124; // 0x807AFCBC
    /* lfs f1, 0x13c(r3) */ // 0x807AFCC0
    r5 = r29 + 0x130; // 0x807AFCC8
    FUN_807AECB4(r4, r3, r5); // bl 0x807AECB4
    /* lfs f0, 0x20(r1) */ // 0x807AFCD0
    r3 = r29 + 0x124; // 0x807AFCD4
    /* stfs f0, 0x124(r29) */ // 0x807AFCD8
    /* lfs f0, 0x24(r1) */ // 0x807AFCDC
    /* stfs f0, 0x128(r29) */ // 0x807AFCE0
    /* lfs f0, 0x28(r1) */ // 0x807AFCE4
    /* stfs f0, 0x12c(r29) */ // 0x807AFCE8
    FUN_805E3430(); // bl 0x805E3430
}