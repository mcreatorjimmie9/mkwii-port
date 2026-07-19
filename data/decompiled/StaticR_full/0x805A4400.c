/* Function at 0x805A4400, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805A4400(int r3, int r4)
{
    /* lfs f2, 8(r4) */ // 0x805A4400
    /* lfs f1, 4(r4) */ // 0x805A4404
    /* lfs f0, 0(r4) */ // 0x805A4408
    /* fneg f2, f2 */ // 0x805A440C
    /* fneg f1, f1 */ // 0x805A4410
    /* fneg f0, f0 */ // 0x805A4414
    /* stfs f2, 8(r3) */ // 0x805A4418
    /* stfs f0, 0(r3) */ // 0x805A441C
    /* stfs f1, 4(r3) */ // 0x805A4420
    return;
}