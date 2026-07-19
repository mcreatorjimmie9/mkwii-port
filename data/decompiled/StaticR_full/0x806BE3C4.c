/* Function at 0x806BE3C4, size=368 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806BE3C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0x9d */ // 0x806BE3CC
    /* li r5, 0 */ // 0x806BE3D0
    *(0x14 + r1) = r0; // stw @ 0x806BE3D4
    *(0xc + r1) = r31; // stw @ 0x806BE3D8
    /* li r31, 0 */ // 0x806BE3DC
    *(8 + r1) = r30; // stw @ 0x806BE3E0
    r30 = r3;
    *(0x2a40 + r3) = r31; // stb @ 0x806BE3E8
    *(0x2a3c + r3) = r31; // stw @ 0x806BE3EC
    r12 = *(0 + r3); // lwz @ 0x806BE3F0
    r12 = *(0x24 + r12); // lwz @ 0x806BE3F4
    /* mtctr r12 */ // 0x806BE3F8
    /* bctrl  */ // 0x806BE3FC
    /* li r4, -1 */ // 0x806BE400
    *(0x2adc + r30) = r4; // stb @ 0x806BE404
    /* li r0, 0xff */ // 0x806BE408
    r3 = r30 + 0x2a44; // 0x806BE40C
    *(0x2add + r30) = r4; // stb @ 0x806BE410
    *(0x2ade + r30) = r4; // stb @ 0x806BE414
    *(0x2adf + r30) = r4; // stb @ 0x806BE418
    *(0x2ae0 + r30) = r4; // stb @ 0x806BE41C
    *(0x2ae1 + r30) = r4; // stb @ 0x806BE420
    *(0x2ae2 + r30) = r4; // stb @ 0x806BE424
    *(0x2ae3 + r30) = r4; // stb @ 0x806BE428
    *(0x2ae4 + r30) = r4; // stb @ 0x806BE42C
    *(0x2ae5 + r30) = r4; // stb @ 0x806BE430
    *(0x2ae6 + r30) = r4; // stb @ 0x806BE434
    *(0x2ae7 + r30) = r4; // stb @ 0x806BE438
    *(0x2ae8 + r30) = r4; // stb @ 0x806BE43C
    *(0x2ae9 + r30) = r4; // stb @ 0x806BE440
    *(0x2aea + r30) = r4; // stb @ 0x806BE444
    *(0x2aeb + r30) = r4; // stb @ 0x806BE448
    *(0x2aec + r30) = r4; // stb @ 0x806BE44C
    *(0x2aed + r30) = r4; // stb @ 0x806BE450
    *(0x2aee + r30) = r4; // stb @ 0x806BE454
    *(0x2aef + r30) = r4; // stb @ 0x806BE458
    *(0x2af1 + r30) = r4; // stb @ 0x806BE45C
    *(0x2af2 + r30) = r4; // stb @ 0x806BE460
    *(0x2af3 + r30) = r4; // stb @ 0x806BE464
    *(0x2ae8 + r30) = r31; // stw @ 0x806BE468
    *(0x2bf8 + r30) = r31; // stw @ 0x806BE46C
    *(0x2bfc + r30) = r31; // stw @ 0x806BE470
    *(0x2c00 + r30) = r31; // stw @ 0x806BE474
    *(0x2c04 + r30) = r31; // stw @ 0x806BE478
    *(0x2c08 + r30) = r31; // stw @ 0x806BE47C
    *(0x2c0c + r30) = r31; // stw @ 0x806BE480
    *(0x2c10 + r30) = r31; // stw @ 0x806BE484
    *(0x2c14 + r30) = r31; // stw @ 0x806BE488
    *(0x2c18 + r30) = r31; // stw @ 0x806BE48C
    *(0x2c1c + r30) = r31; // stw @ 0x806BE490
    *(0x2c20 + r30) = r31; // stw @ 0x806BE494
    *(0x2c24 + r30) = r31; // stw @ 0x806BE498
    *(0x2c28 + r30) = r31; // stw @ 0x806BE49C
    *(0x2c2c + r30) = r31; // stw @ 0x806BE4A0
    *(0x2c30 + r30) = r31; // stw @ 0x806BE4A4
    *(0x2c34 + r30) = r31; // stw @ 0x806BE4A8
    *(0x2c38 + r30) = r31; // stw @ 0x806BE4AC
    *(0x2c3c + r30) = r31; // stw @ 0x806BE4B0
    *(0x2c40 + r30) = r31; // stw @ 0x806BE4B4
    *(0x2c44 + r30) = r31; // stw @ 0x806BE4B8
    *(0x2c48 + r30) = r31; // stw @ 0x806BE4BC
    *(0x2c4c + r30) = r31; // stw @ 0x806BE4C0
    *(0x2c50 + r30) = r31; // stw @ 0x806BE4C4
    *(0x2c54 + r30) = r31; // stw @ 0x806BE4C8
    *(0x2c58 + r30) = r31; // stw @ 0x806BE4CC
    *(0x2c5c + r30) = r0; // stb @ 0x806BE4D0
    *(0x2aec + r30) = r4; // stw @ 0x806BE4D4
    *(0x2af4 + r30) = r4; // stw @ 0x806BE4D8
    *(0x2c60 + r30) = r31; // stw @ 0x806BE4DC
    *(0x2af0 + r30) = r31; // stb @ 0x806BE4E0
    *(0x2af8 + r30) = r31; // stb @ 0x806BE4E4
    *(0x2af9 + r30) = r31; // stb @ 0x806BE4E8
    *(0x2afa + r30) = r31; // stb @ 0x806BE4EC
    *(0x2afb + r30) = r31; // stb @ 0x806BE4F0
    *(0x2afc + r30) = r31; // stb @ 0x806BE4F4
    *(0x2afd + r30) = r31; // stb @ 0x806BE4F8
    *(0x2afe + r30) = r31; // stb @ 0x806BE4FC
    *(0x2aff + r30) = r31; // stb @ 0x806BE500
    *(0x2b00 + r30) = r31; // stb @ 0x806BE504
    *(0x2b01 + r30) = r31; // stb @ 0x806BE508
    *(0x2b02 + r30) = r31; // stb @ 0x806BE50C
    *(0x2b03 + r30) = r31; // stb @ 0x806BE510
    *(0x2b04 + r30) = r31; // stb @ 0x806BE514
    FUN_8066DB2C(); // bl 0x8066DB2C
    r0 = *(0x14 + r1); // lwz @ 0x806BE51C
    r31 = *(0xc + r1); // lwz @ 0x806BE520
    r30 = *(8 + r1); // lwz @ 0x806BE524
    return;
}