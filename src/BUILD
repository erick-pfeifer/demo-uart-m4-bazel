load(
    "@rules_cc//cc:defs.bzl",
    "cc_binary",
)

cc_library(
    name = "main",
    srcs = ["main.cc"],
    copts = ["-std=c++17"],
    linkopts = ["-Wl,-Map=app.map"],
    visibility = ["//visibility:public"],
    deps = ["@atsame54_device_pack//:same54n20a_deps"],
)

cc_binary(
    name = "device_application",
    visibility = ["//:__pkg__"],
    deps = [
        ":main",
        "//targets/atsame54n20a:linker_script",
        "//targets/atsame54n20a:pre_init",
        # Resolves dependencies to lib nano (_write, _read, etc) with stubs.
        "@pigweed//pw_toolchain/arm_gcc:arm_none_eabi_gcc_support",
    ],
)
