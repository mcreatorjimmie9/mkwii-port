/* Function at 0x805EACF0, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805EACF0(int r3, int r4)
{
    r4 = *(4 + r3); // lwz @ 0x805EACF0
    /* fmuls f0, f1, f1 */ // 0x805EACF4
    r4 = *(0x48 + r4); // lwz @ 0x805EACF8
    /* stfs f0, 0(r4) */ // 0x805EACFC
    r3 = *(8 + r3); // lwz @ 0x805EAD00
    r3 = *(0x48 + r3); // lwz @ 0x805EAD04
    /* stfs f0, 0(r3) */ // 0x805EAD08
    return;
}