def _csv_file_impl(ctx):

csv_file = rule(
    implementation = _csv_impl,
    doc = "Run binary and redirect output to csv file <test_name>.csv",
    executable = True
)

