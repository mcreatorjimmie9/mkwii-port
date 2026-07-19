/* Function at 0x8070F7D0, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8070F7D0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8070F7DC
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    /* lfs f0, 0x58(r31) */ // 0x8070F7E8
    r3 = r31;
    /* stfs f0, 0x124(r31) */ // 0x8070F7F0
    /* lfs f0, 0x5c(r31) */ // 0x8070F7F4
    /* stfs f0, 0x128(r31) */ // 0x8070F7F8
    /* lfs f0, 0x60(r31) */ // 0x8070F7FC
    /* stfs f0, 0x12c(r31) */ // 0x8070F800
    /* lfs f0, 0x64(r31) */ // 0x8070F804
    /* stfs f0, 0x130(r31) */ // 0x8070F808
    /* lfs f0, 0x68(r31) */ // 0x8070F80C
    /* stfs f0, 0x134(r31) */ // 0x8070F810
    /* lfs f0, 0x6c(r31) */ // 0x8070F814
    /* stfs f0, 0x138(r31) */ // 0x8070F818
    /* lfs f0, 0x70(r31) */ // 0x8070F81C
    /* stfs f0, 0x13c(r31) */ // 0x8070F820
    /* lfs f0, 0x74(r31) */ // 0x8070F824
    /* stfs f0, 0x140(r31) */ // 0x8070F828
    /* lfs f0, 0x78(r31) */ // 0x8070F82C
    /* stfs f0, 0x144(r31) */ // 0x8070F830
    /* lfs f0, 0x7c(r31) */ // 0x8070F834
    /* stfs f0, 0x148(r31) */ // 0x8070F838
    /* lfs f0, 0x80(r31) */ // 0x8070F83C
    /* stfs f0, 0x14c(r31) */ // 0x8070F840
    /* lfs f0, 0x84(r31) */ // 0x8070F844
    /* stfs f0, 0x150(r31) */ // 0x8070F848
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = r31 + 0x58; // 0x8070F850
    r31 = *(0xc + r1); // lwz @ 0x8070F854
    r0 = *(0x14 + r1); // lwz @ 0x8070F858
    return;
}