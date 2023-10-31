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
)

cc_binary(
    name = "device_application",
    visibility = ["//:__pkg__"],
    deps = [
        ":main",
        "//targets/atsame54n20a:linker_script",
        "//targets/atsame54n20a:pre_init",
    ],
)
